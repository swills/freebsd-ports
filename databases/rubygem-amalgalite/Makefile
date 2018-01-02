# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: head/databases/rubygem-amalgalite/Makefile 456362 2017-12-14 20:43:44Z sunpoet $

PORTNAME=	amalgalite
PORTVERSION=	1.6.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Embeds the SQLite database engine in a Ruby extension

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-arrayfields>=4.9:devel/rubygem-arrayfields

USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/amalgalite-pack

.include <bsd.port.mk>
