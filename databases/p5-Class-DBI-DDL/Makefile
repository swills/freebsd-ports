# Created by: Daniel Wijnands <daniel@itxl.nl>
# $FreeBSD: head/databases/p5-Class-DBI-DDL/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Class-DBI-DDL
PORTVERSION=	1.02
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DDL for Class-DBI

BUILD_DEPENDS=	p5-Class-DBI>=0:databases/p5-Class-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-DBD-SQLite>=0:databases/p5-DBD-SQLite

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
