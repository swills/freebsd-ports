# $FreeBSD: head/sysutils/doctl/Makefile 464548 2018-03-15 01:38:42Z jrm $

PORTNAME=	doctl
DISTVERSIONPREFIX=	v
DISTVERSION=	1.7.2
CATEGORIES=	sysutils

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Command line tool for DigitalOcean services

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		go
USE_GITHUB=	yes
GH_ACCOUNT=	digitalocean

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}
GO_TARGET=	${GO_PKGNAME}/cmd/${PORTNAME}

PLIST_FILES=	bin/doctl

.include <bsd.port.mk>
