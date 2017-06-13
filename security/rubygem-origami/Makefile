# $FreeBSD: head/security/rubygem-origami/Makefile 439569 2017-04-27 21:19:35Z antoine $

PORTNAME=	origami
PORTVERSION=	2.0.2
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Ruby framework to parse analyze and forge PDF documents

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/COPYING.LESSER

RUN_DEPENDS=	rubygem-colorize>=0.7:devel/rubygem-colorize

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	examples/*/*.rb

.include <bsd.port.mk>
