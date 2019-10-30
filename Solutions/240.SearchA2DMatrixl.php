<?php
class Solution {

    /**
     * @param Integer[][] $matrix
     * @param Integer $target
     * @return Boolean
     */
    function searchMatrix($matrix, $target) {
        $w = count($matrix);
        if ($w == 0 ){
            return false;
        }
        $d = count($matrix[0]);
        $i = 0;
        $j = $d - 1;

        for (;$i < $w && $j >= 0;) {
            if ($matrix[$i][$j] > $target) {
                $j--;
            } elseif ($matrix[$i][$j] < $target) {
                $i++;
            } else {
                return true;
            }
        }
        return false;
    }
}

$a = array(
    array( 1, 4, 7,11,15),
    array( 2, 5, 8,12,19),
    array( 3, 6, 9,16,22),
    array(10,13,15,17,24),
    array(18,21,23,26,30),
);

$s = new Solution;
echo $s->searchMatrix($a, 125411) ? 'true':'false';
?>

