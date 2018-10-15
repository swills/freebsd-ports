# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: head/lang/p5-Switch/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Switch
PORTVERSION=	2.17
PORTREVISION=	1
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CHORNY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Switch - A switch statement for Perl

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Filter>0:devel/p5-Filter

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
