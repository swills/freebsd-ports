# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/textproc/p5-CSS-Compressor/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	CSS-Compressor
PORTVERSION=	0.02
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl extension for CSS minification

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USE_PERL5=	configure
USES=		perl5

post-install:
	${INSTALL_SCRIPT} ${FILESDIR}/csscompressor ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
