# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-ExtUtils-Constant/Makefile 447417 2017-08-05 23:10:53Z sunpoet $

PORTNAME=	ExtUtils-Constant
PORTVERSION=	0.24
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate XS code to import C header constants

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/INSTALLDIRS/d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
