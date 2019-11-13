# $FreeBSD$

PORTNAME=	irb
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	meta@FreeBSD.org
COMMENT=	Interactive Ruby

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/irb

.include <bsd.port.pre.mk>

.if ${RUBY_VER} < 2.6
IGNORE=		irb is included in ruby port
.endif

.include <bsd.port.post.mk>
