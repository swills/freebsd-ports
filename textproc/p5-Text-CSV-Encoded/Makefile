# Created by: Dereckson <dereckson@gmail.com>
# $FreeBSD: head/textproc/p5-Text-CSV-Encoded/Makefile 447708 2017-08-10 18:24:10Z sunpoet $

PORTNAME=	Text-CSV-Encoded
PORTVERSION=	0.25
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dereckson@gmail.com
COMMENT=	Perl module for Encoding aware CVS files parsing

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Text-CSV>=0:textproc/p5-Text-CSV
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
