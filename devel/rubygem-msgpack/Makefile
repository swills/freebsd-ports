# $FreeBSD: head/devel/rubygem-msgpack/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	msgpack
PORTVERSION=	0.5.12
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Gems for MessagePack

LICENSE=	APACHE20

USE_RUBY=	yes
USES=		gem
STRIPDIR=	${STAGEDIR}${PREFIX}/${GEMS_BASE_DIR}

post-install:
	${FIND} ${STRIPDIR} -type f \( -name '*.o' -o -name '*.so' \) | ${XARGS} ${STRIP_CMD}

.include <bsd.port.mk>
