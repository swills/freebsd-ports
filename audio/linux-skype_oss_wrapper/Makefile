# Created by: Andriy Voskoboinyk <s3erios@gmail.com>
# $FreeBSD: head/audio/linux-skype_oss_wrapper/Makefile 433990 2017-02-13 13:29:17Z tijl $

PORTNAME=	skype_oss_wrapper
PORTVERSION=	0.1.1
DISTVERSIONPREFIX=	v
CATEGORIES=	audio linux
PKGNAMEPREFIX=	linux-

MAINTAINER=	s3erios@gmail.com
COMMENT=	Partial PulseAudio API implementation using OSS backend

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	s3erios

MAKE_ARGS=	CC=${LINUXBASE}/usr/bin/gcc
USES=		linux
USE_LINUX=	base devtools:build
USE_LINUX_PREFIX=	yes
# do not define USE_LDCONFIG, it's not for global use

ONLY_FOR_ARCHS=	i386 amd64
PLIST_FILES=	lib/skype_oss_wrapper/libpulse.so.0

LIB_DIR=	${PREFIX}/lib/${PORTNAME}

post-install:
	${RM} ${STAGEDIR}${PREFIX}/bin/skype_oss
	${RMDIR} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
