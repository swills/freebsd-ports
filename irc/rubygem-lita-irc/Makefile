# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/irc/rubygem-lita-irc/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	lita-irc
PORTVERSION=	2.2.0
PORTREVISION=	1
CATEGORIES=	irc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	IRC adapter for the Lita chat robot

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-cinch>=2.0:irc/rubygem-cinch \
		rubygem-lita>=4.0:net-im/rubygem-lita

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
