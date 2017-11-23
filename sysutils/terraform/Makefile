# $FreeBSD: head/sysutils/terraform/Makefile 454380 2017-11-17 19:22:24Z lifanov $

PORTNAME=	terraform
PORTVERSION=	0.11.0
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	lifanov@FreeBSD.org
COMMENT=	Provides a common configuration to launch infrastructure

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	hashicorp

PLIST_FILES=	bin/${PORTNAME}

USES=	go

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}

post-patch:
	${REINPLACE_CMD} 's|Prerelease = "dev"|Prerelease = ""|' \
		${WRKSRC}/version/version.go


.include <bsd.port.mk>
