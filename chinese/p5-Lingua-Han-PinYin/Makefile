# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/chinese/p5-Lingua-Han-PinYin/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Lingua-Han-PinYin
PORTVERSION=	0.23
CATEGORIES=	chinese perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Retrieve the Mandarin (PinYin) of Chinese character (HanZi)

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Lingua-Han-Utils>=0.10:chinese/p5-Lingua-Han-Utils
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
