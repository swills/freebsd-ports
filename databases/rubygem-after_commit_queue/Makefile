# $FreeBSD: head/databases/rubygem-after_commit_queue/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	after_commit_queue
PORTVERSION=	1.3.0
PORTREVISION=	1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ports@michael-fausten.de
COMMENT=	Allows to run callbacks after transaction is committed

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS?=	rubygem-activerecord4>=3.0:databases/rubygem-activerecord4

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
