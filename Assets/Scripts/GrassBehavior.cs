using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GrassBehavior : MonoBehaviour

{    public TerrainData terrain; 
    public DataVisualizer data;

    public float grassMovementStrength;
    // Start is called before the first frame update
    void Start()
    {
        terrain.wavingGrassSpeed = 1;

    }

    // Update is called once per frame
    void Update()
    {
        terrain.wavingGrassStrength = data.breathRange * grassMovementStrength;

    }
}
