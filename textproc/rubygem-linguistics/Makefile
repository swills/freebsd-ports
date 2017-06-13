# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: head/textproc/rubygem-linguistics/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	linguistics
PORTVERSION=	2.1.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Framework for extending Ruby objects with linguistic methods

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-loggability>=0.11:textproc/rubygem-loggability

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	lib/linguistics.rb \
		lib/linguistics/en/linkparser.rb

.include <bsd.port.mk>
