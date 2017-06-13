# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/databases/p5-DBIx-ContextualFetch/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DBIx-ContextualFetch
PORTVERSION=	1.03
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Add contextual fetches to DBI

RUN_DEPENDS=	p5-DBI>=0:databases/p5-DBI
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-DBD-SQLite>=0:databases/p5-DBD-SQLite

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
