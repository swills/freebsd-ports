# $FreeBSD: head/sysutils/aptly/Makefile 448888 2017-08-28 21:28:17Z romain $

PORTNAME=	aptly
PORTVERSION=	1.1.1
DISTVERSIONPREFIX=v
CATEGORIES=	sysutils

MAINTAINER=	romain@FreeBSD.org
COMMENT=	Debian repository management tool

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go

USE_GITHUB=	yes
GH_ACCOUNT=	smira
GO_PKGNAME=	github.com/smira/aptly

PLIST_FILES=	bin/aptly

.include <bsd.port.mk>
