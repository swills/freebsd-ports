# Created by: -
# $FreeBSD: head/textproc/p5-Lingua-Ispell/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Lingua-Ispell
PORTVERSION=	0.07
PORTREVISION=	3
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl module that encapsulates access to the Ispell program

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	ispell:textproc/aspell-ispell

NO_ARCH=	yes
REINPLACE_ARGS=	-i ''
USE_PERL5=	configure
USES=		perl5

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|' ${WRKSRC}/lib/Lingua/Ispell.pm

.include <bsd.port.mk>
