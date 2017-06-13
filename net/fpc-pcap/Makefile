# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/net/fpc-pcap/Makefile 434894 2017-02-26 17:38:04Z acm $

CATEGORIES=	net lang
PKGNAMESUFFIX=	-pcap

MAINTAINER=	freebsd-fpc@FreeBSD.org
COMMENT=	Free Pascal unit for libpcap library

USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
