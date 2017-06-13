# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/databases/p5-Class-DBI-Plugin-AbstractCount/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	Class-DBI-Plugin-AbstractCount
PORTVERSION=	0.08
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Get COUNT(*) results with abstract SQL

BUILD_DEPENDS=	p5-Class-DBI-Plugin>=0.02:databases/p5-Class-DBI-Plugin \
		p5-Class-DBI>=0.95:databases/p5-Class-DBI \
		p5-SQL-Abstract>=1.50:databases/p5-SQL-Abstract
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
