# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/databases/p5-DBIx-Introspector/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DBIx-Introspector
PORTVERSION=	0.001005
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Detect what database you are connected to

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-DBI>=0:databases/p5-DBI \
		p5-Moo>=0:devel/p5-Moo
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
