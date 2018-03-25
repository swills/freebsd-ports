# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/dns/cli53/Makefile 465067 2018-03-20 06:16:18Z meta $

PORTNAME=	cli53
DISTVERSION=	0.8.12
CATEGORIES=	dns

MAINTAINER=	meta@FreeBSD.org
COMMENT=	Command line management of Route53 domains

LICENSE=	MIT

BUILD_DEPENDS=  go>=1.5:lang/go

USES=		go
USE_GITHUB=	yes
GH_ACCOUNT=	barnybug

WRKSRC_SUBDIR=	cmd/cli53
GO_PKGNAME=     github.com/${GH_ACCOUNT}/${PORTNAME}/cmd/cli53
PLIST_FILES=	bin/cli53

post-extract:
	@${MKDIR} ${GO_WRKSRC:H:H:H}
	@${LN} -sf ${WRKSRC:H:H} ${GO_WRKSRC:H:H}

.include <bsd.port.mk>
