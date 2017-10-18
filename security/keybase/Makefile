# $FreeBSD: head/security/keybase/Makefile 451201 2017-10-04 10:55:18Z sunpoet $

PORTNAME=	keybase
PORTVERSION=	1.0.33
DISTVERSIONPREFIX=	v
CATEGORIES=	security

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Keybase.io client

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/../LICENSE

GO_PKGNAME=	github.com/keybase/client/go
GO_TARGET=	-tags production ${GO_PKGNAME}/keybase
USES=		go
WRKSRC_SUBDIR=	go

PLIST_FILES=	bin/keybase

GH_PROJECT=	client
USE_GITHUB=	yes

post-patch:
	@${REINPLACE_CMD} -e '1 s|,amd64||' ${WRKSRC}/vendor/github.com/keybase/go-ps/process_freebsd.go

.include <bsd.port.mk>
