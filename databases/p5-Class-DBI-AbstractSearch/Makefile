# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: head/databases/p5-Class-DBI-AbstractSearch/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Class-DBI-AbstractSearch
PORTVERSION=	0.07
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Abstract Class::DBI SQL with SQL::Abstract

RUN_DEPENDS=	p5-Class-DBI>=0:databases/p5-Class-DBI \
		p5-SQL-Abstract>=0:databases/p5-SQL-Abstract \
		p5-SQL-Abstract-Limit>=0:databases/p5-SQL-Abstract-Limit
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
