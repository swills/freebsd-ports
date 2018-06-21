# $FreeBSD: head/graphics/rubygem-gemojione32/Makefile 472976 2018-06-21 15:28:59Z mfechner $

PORTNAME=	gemojione
PORTVERSION=	3.2.0
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	32

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Gem containing EmojiOne unicode/image assets

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-json>=0:devel/rubygem-json

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PORTSCOUT=	limit:^3\.2\.

.include <bsd.port.mk>
