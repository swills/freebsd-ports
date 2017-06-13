# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/databases/p5-Iterator-DBI/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Iterator-DBI
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Iterator for returning DBI query results

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Iterator>=0:devel/p5-Iterator
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
