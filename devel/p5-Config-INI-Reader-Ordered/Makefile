# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/devel/p5-Config-INI-Reader-Ordered/Makefile 435016 2017-02-28 09:45:10Z sunpoet $

PORTNAME=	Config-INI-Reader-Ordered
PORTVERSION=	0.020
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	INI-file parser that returns sections in order

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Config-INI>=0:devel/p5-Config-INI
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
