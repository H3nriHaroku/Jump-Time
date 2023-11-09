using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour {

	bool gameHasEnded = false;

	public float restartDelay = 1f;

	public GameObject completeLevelUI;

	private void Start()
    {
		AdsManagment.instance.RequestInterstitial();
    }

	public void CompleteLevel ()
	{
		completeLevelUI.SetActive(true);
		Debug.Log("LEVEL WON!");
	}

	public void EndGame ()
	{
		if (gameHasEnded == false)
		{
			
			gameHasEnded = true;
			Debug.Log("GAME OVER");
			Invoke("Restart", restartDelay);
			
		}

		if(Random.Range(0,3) == 0)
		{
			AdsManagment.instance.ShowInterstitial();
		}
		
		
	}

	void Restart ()
	{
		SceneManager.LoadScene(SceneManager.GetActiveScene().name);
	}

}
