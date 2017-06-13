# Created by: Dominic Fandrey <kamikaze@bsdforen.de>
# $FreeBSD: head/sysutils/automounter/Makefile 430166 2016-12-31 21:07:50Z sunpoet $

PORTNAME=	automounter
PORTVERSION=	1.5.1
CATEGORIES=	sysutils

MAINTAINER=	kami@FreeBSD.org
COMMENT=	Provides scripts to dynamically configure amd

LICENSE=	BSD2CLAUSE

WRKSRC_SUBDIR=	src
NO_BUILD=	yes
PKGMESSAGE=	${WRKSRC}/../NOTES

USE_GITHUB=	yes
GH_ACCOUNT=	lonkamikaze

do-install:
		@(cd ${WRKSRC}; ./install.sh -destdir=${STAGEDIR} \
			-prefix=${PREFIX})

.include <bsd.port.mk>
