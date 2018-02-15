# $FreeBSD: head/net/bosh-bootloader/Makefile 461485 2018-02-11 10:44:40Z dumbbell $

PORTNAME=	bosh-bootloader
PORTVERSION=	6.1.1
CATEGORIES=	net sysutils

MAINTAINER=	dumbbell@FreeBSD.org
COMMENT=	CLI for standing up CloudFoundry or Concourse on an IAAS

LICENSE=	APACHE20

USE_GITHUB=	yes
GH_TUPLE=	cloudfoundry:bosh-bootloader:v${PORTVERSION}

USES=		go tar:xz

GO_PKGNAME=	github.com/cloudfoundry/bosh-bootloader
GO_TARGET=	github.com/cloudfoundry/bosh-bootloader/bbl

PLIST_FILES=	bin/bbl

post-patch:
	${REINPLACE_CMD} -E -e 's|(Version = )"dev"|\1"${PORTVERSION}"|' ${WRKSRC}/bbl/main.go

.include <bsd.port.mk>
