# $FreeBSD: head/sysutils/packer/Makefile 465720 2018-03-27 15:50:17Z lifanov $

PORTNAME=	packer
PORTVERSION=	1.2.2
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	lifanov@FreeBSD.org
COMMENT=	Tool for creating machine images

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

PLIST_FILES=	bin/${PORTNAME}

USE_GITHUB=	yes
GH_ACCOUNT=	hashicorp

USES=	go

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}

.include <bsd.port.mk>
