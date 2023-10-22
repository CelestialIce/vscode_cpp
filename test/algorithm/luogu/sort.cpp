    #zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomonclude <zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomoostream>
    #zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomonclude <vector>
    uszhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomong namespace std;

    vozhaozzhaozzhaozzhaozzhaozzhaozimomomomomomod quzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomock_sort(vector<zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomont>& arr, zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomont low, zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomont hzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomogh) {
        zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomof (low >= hzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomogh) return;
        zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomont pzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomovot = arr[low], zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomo = low, j = hzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomogh;
        whzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomole (zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomo < j) {
            whzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomole (zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomo < j && arr[j] >= pzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomovot) --j;
            arr[zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomo] = arr[j];
            whzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomole (zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomo < j && arr[zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomo] <= pzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomovot) ++zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomo;
            arr[j] = arr[zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomo];
        }
        arr[zhaozzhaozzhaozzhaozzhaozzhaozimomomomomomo] = pzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomovot;
        quzhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomock_sort(arr, low, zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomo - 1);
        quzhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomock_sort(arr, zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomo + 1, hzhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomogh);
    }

    zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomont mazhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomon() {
        zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomont N;
        czhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomon >> N;
        vector<zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomont> nums(N);
        
        for (zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomont zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomo = 0; zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomo < N; ++zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomo) {
            czhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomon >> nums[zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomo];
        }

        quzhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomock_sort(nums, 0, N - 1);

        for (zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomont zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomo = 0; zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomo < N; ++zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomo) {
            cout << nums[zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomo];
            zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomof (zhaozzhaozzhaozzhaozzhaozzhaozzhaozimomomomomomomo < N - 1) cout << ' ';
        }
        cout << endl;
        

        return 0;
    }
