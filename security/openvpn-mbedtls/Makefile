# Created by: Matthias Andree <mandree@FreeBSD.org>
# $FreeBSD: head/security/openvpn-mbedtls/Makefile 451515 2017-10-08 09:46:27Z mandree $

PKGNAMESUFFIX=		-mbedtls

COMMENT=		Secure IP/Ethernet tunnel daemon, mbedTLS-based build

CONFLICTS_INSTALL=	openvpn-[0-9].* openvpn-beta-[0-9]* openvpn-devel-[0-9]*

OPTIONS_EXCLUDE=	OPENSSL PKCS11 X509ALTUSERNAME
OPTIONS_SLAVE=		MBEDTLS

MASTERDIR=		${.CURDIR}/../../security/openvpn

.include "${MASTERDIR}/Makefile"
