export default function bubble_sort(arr: number[]) :void {
    for(let i = 0; i < arr.length; i++)
    {
//The minus one is importante because, when later we compare the position next to 'j', we don't want to go off the array limits. 
//As such, in the first iteration j will only take the value of the index of the previous position to the last one, 
//because the comparation is j + 1 and that already corresponds to the last value of the array.
        for(let j = 0; j < arr.length - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                const tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}