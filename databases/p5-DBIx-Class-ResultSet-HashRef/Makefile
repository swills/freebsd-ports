# Created by: Fernan Aguero <fernan@iib.unsam.edu.ar>
# $FreeBSD: head/databases/p5-DBIx-Class-ResultSet-HashRef/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DBIx-Class-ResultSet-HashRef
PORTVERSION=	1.002
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Adds syntactic sugar to skip the fancy objects

BUILD_DEPENDS=	p5-DBIx-Class>=0.04001:databases/p5-DBIx-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-DBD-SQLite>=0:databases/p5-DBD-SQLite \
		p5-SQL-Translator>=0:databases/p5-SQL-Translator

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
