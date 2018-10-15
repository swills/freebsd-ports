# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: head/devel/p5-Data-Compare/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Data-Compare
PORTVERSION=	1.2200
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DCANTRELL
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0*$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Data::Compare - compare perl data structures

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-Find-Rule>=0:devel/p5-File-Find-Rule

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
