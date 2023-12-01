using UnityEngine;

public class PlayerController : MonoBehaviour
{
    private bool isPowerActive = false;
    private Rigidbody rb;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    void Update()
    {
        // Handle player movement using AddForce or other methods

        if (Input.GetMouseButtonDown(0))
        {
            // Check if the player touches the power game object
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out hit))
            {
                if (hit.collider.CompareTag("Power"))
                {
                    // Deactivate power game object
                    hit.collider.gameObject.SetActive(false);

                    // Activate the power for 5 seconds
                    StartCoroutine(ActivatePower());
                }
            }
        }
    }

    IEnumerator ActivatePower()
    {
        isPowerActive = true;
        yield return new WaitForSeconds(5f);
        isPowerActive = false;
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.CompareTag("Obstacle"))
        {
            // Check if power is active, if not, trigger game over
            if (!isPowerActive)
            {
                Debug.Log("Game Over");
                // Add any other game over logic here
            }
            else
            {
                // Disable the kinetic body of the obstacle for 5 seconds
                StartCoroutine(DisableObstacleKineticBody(collision.collider.gameObject));
            }
        }
    }

    IEnumerator DisableObstacleKineticBody(GameObject obstacle)
    {
        Rigidbody obstacleRb = obstacle.GetComponent<Rigidbody>();
        obstacleRb.isKinematic = true;
        yield return new WaitForSeconds(5f);
        obstacleRb.isKinematic = false;
    }
}
