# Created by: gugu
# $FreeBSD: head/devel/p5-MooseX-InsideOut/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	MooseX-InsideOut
PORTVERSION=	0.106
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Inside-out objects with Moose

BUILD_DEPENDS=	p5-Hash-Util-FieldHash-Compat>=0:devel/p5-Hash-Util-FieldHash-Compat \
		p5-Moose>=2:devel/p5-Moose \
		p5-namespace-clean>=0.11:devel/p5-namespace-clean
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
