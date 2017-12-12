# $FreeBSD: head/sysutils/terraform/Makefile 455298 2017-12-01 16:12:28Z lifanov $

PORTNAME=	terraform
PORTVERSION=	0.11.1
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
