function FindProxyForURL(url, host) {
    //https://music.163.com
    const UNMUSIC_PROXY = "PROXY 149.129.61.240:8000; DIRECT"

    if (dnsDomainIs(host, "music.163.com")){
        return UNMUSIC_PROXY
    }
    if (shExpMatch(url, "music.163.com") || 
        shExpMatch(url, "*.music.163.com") ||
        shExpMatch(url, "*.music.163.com:*")){
        return UNMUSIC_PROXY
    }

    return "DIRECT";
 }