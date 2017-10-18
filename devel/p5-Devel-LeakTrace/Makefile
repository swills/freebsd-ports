# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-Devel-LeakTrace/Makefile 451486 2017-10-08 06:10:54Z sunpoet $

PORTNAME=	Devel-LeakTrace
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Indicate where leaked variables are coming from

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5 pkgconfig
USE_GNOME=	glib20
USE_PERL5=	modbuild

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Devel/LeakTrace/LeakTrace.so

.include <bsd.port.mk>
