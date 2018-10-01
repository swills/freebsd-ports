# $FreeBSD: head/net/libyang/Makefile 480743 2018-09-26 15:54:11Z olivier $

PORTNAME=	libyang
PORTVERSION=	0.16
DISTVERSIONPREFIX=	v
DISTVERSIONSUFFIX=	-r1
CATEGORIES=	net

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	YANG data modeling language library

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libpcre.so:devel/pcre

USES=	cmake
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	CESNET

.include <bsd.port.mk>
