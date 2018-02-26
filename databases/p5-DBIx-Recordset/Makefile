# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/databases/p5-DBIx-Recordset/Makefile 462820 2018-02-24 14:02:05Z sunpoet $

PORTNAME=	DBIx-Recordset
PORTVERSION=	0.26
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for abstraction and simplification of database access

BUILD_DEPENDS=	p5-DBI>=0:databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
