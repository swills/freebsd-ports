# Created by: Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
# $FreeBSD: head/x11-themes/kde-icons-icosx/Makefile 446387 2017-07-22 11:01:38Z antoine $

PORTNAME=	IcOsX
PORTVERSION=	0.7
MASTER_SITES=	http://physics.ramapo.edu/downloads/ \
		http://easylinuxguide.com/downloads/kde-iconthemes/ \
		ftp://ftp.itsinternet.net/pub/FreeBSD/ports/distfiles/KDE/ \
		ftp://relay1.tomsk.gov.ru/pub/FreeBSD/ports/distfiles/KDE/

COMMENT=	KDE IcOsX iconset

BROKEN=		does not fetch
DEPRECATED=	Broken for more than 6 months
EXPIRATION_DATE=	2017-08-23

WRKSRC=		${WRKDIR}/${PORTNAME}
PORT_SHAREDIR?=	"${PORTNAME}-${PORTVERSION}"

.include "${.CURDIR}/../kde-icons-noia/Makefile.icons"
