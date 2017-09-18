# Created by: Denis Pokataev <catone@cpan.org>
# $FreeBSD: head/devel/p5-AnyEvent-DBI/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	AnyEvent-DBI
PORTVERSION=	2.3
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Asynchronous DBI access

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-AnyEvent>=4.15:devel/p5-AnyEvent \
		p5-DBI>=1.0:databases/p5-DBI \
		p5-common-sense>=3.3:devel/p5-common-sense
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
