# Created by: Joshua D. Abraham <jabra@ccs.neu.edu>
# $FreeBSD: head/databases/p5-Test-DatabaseRow/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Test-DatabaseRow
PORTVERSION=	2.04
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Simple database tests

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-DBI>=0:databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
