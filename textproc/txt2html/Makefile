# Created by: Don Croyle <croyle@gelemna.org>
# $FreeBSD: head/textproc/txt2html/Makefile 432932 2017-01-31 16:21:45Z mat $

PORTNAME=	txt2html
PORTVERSION=	2.51
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Convert raw text to something with a little HTML formatting

BUILD_DEPENDS=	p5-Getopt-ArgvFile>=0:devel/p5-Getopt-ArgvFile \
		p5-YAML-Syck>=0:textproc/p5-YAML-Syck
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
