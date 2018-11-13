# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/www/twiki-MathModePlugin/Makefile 484640 2018-11-10 19:57:07Z kwm $

PORTNAME=	MathModePlugin
SVNREV=		15934
PORTREVISION=	1
MASTER_SITES=	http://protey.ru/freebsd/distfiles/ \
		LOCAL/skv

COMMENT=	Include LaTeX formatted math in your TWiki pages

RUN_DEPENDS=	convert:graphics/ImageMagick6

USE_TEX=	base latex

post-patch:
	${REINPLACE_CMD} -i '' -e 's!=/usr/bin!=${LOCALBASE}/bin!g; s!=/bin!=/usr/bin!g;' \
		${WRKSRC}/pub/TWiki/MathModePlugin/latex2img

.include "${.CURDIR}/../twiki/bsd.twiki.mk"
.include <bsd.port.mk>
