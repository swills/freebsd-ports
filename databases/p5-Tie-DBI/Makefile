# Created by: clive
# $FreeBSD: head/databases/p5-Tie-DBI/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Tie-DBI
PORTVERSION=	1.06
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module implementing Tie hash to a DBI handle

RUN_DEPENDS=	p5-DBI>=0:databases/p5-DBI
BUILD_DEPENDS:=	${RUN_DEPENDS}
BUILD_DEPENDS+=	p5-DBD-SQLite>=0:databases/p5-DBD-SQLite

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
