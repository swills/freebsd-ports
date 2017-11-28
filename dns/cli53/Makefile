# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/dns/cli53/Makefile 454961 2017-11-27 14:55:45Z joneum $

PORTNAME=	cli53
DISTVERSION=	0.8.12
CATEGORIES=	dns

MAINTAINER=	meta+ports@vmeta.jp
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
